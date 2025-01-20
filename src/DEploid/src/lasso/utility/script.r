#!/usr/bin/env Rscript
rm(list=ls())
library(dplyr)

args = (commandArgs(TRUE))

inFileName = args[1]

system(paste("grep TABLE ", inFileName, " > ", inFileName, ".TABLE", sep=""))
system(paste("grep BETA ", inFileName, " > ", inFileName, ".BETA", sep=""))

mytable = read.table(paste(inFileName, ".TABLE", sep=""), header=T, stringsAsFactors = F)[,-1]
mybeta = read.table(paste(inFileName, ".BETA", sep=""), header=T, stringsAsFactors = F)[,-1]


pdf("tmp.pdf")

plot(mytable$df, ylab = "# of predictor variable")

plot(mytable$rsq, ylab = "Deviance ratio")

plot(diff(mytable$rsq), ylab = "Deviance ratio differences" )

v_idx = c()
plot(c(0, max(mytable$L1norm)),
     c(min(mybeta[,-1]), max(mybeta[,-1])), type="n", xlab = "L1 Norm", ylab = "Coefficient")
for (i in 1:dim(mybeta)[1]){
#    if (sum(mybeta[i,-1])>0){
     lines(c(0,mytable$L1norm), c(0,mybeta[i,-1]), col = i)
#        v_idx = c(v_idx, i)
#    }
}
legend("topleft", legend=mybeta[,1], col = 1:length(mybeta[,1]), lty=1)

dev.off()
