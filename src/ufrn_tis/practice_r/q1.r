births <- read.csv('data/Nascimentos_RN.csv', 
                  encoding='latin1', 
                  sep=';',
                  na.strings='-')

# A -------------------------------------------------

diff_13to14 <- births$X2013 - births$X2014
highterFallPos <- which.max(diff13to14)

print(paste('Maior queda de nascimentos (2013~2014): ',
      diff_13to14[highterFallPos],
      ' em ',
      sub('.* ', '', births$Município[highterFallPos])))

# B -------------------------------------------------

births_natal <- subset(births, births$Município=='240810 Natal')

higherBirthRatePos <- -1
higherBirthRate <- -Inf
for (i in 2:(ncol(births_natal)-2)){
  birthRate <- as.numeric(births_natal[i+1]) - as.numeric(births_natal[i])
  if (birthRate > higherBirthRate){
    higherBirthRatePos <- i
    higherBirthRate <- birthRate
  }
}

birthsColNames <- colnames(births)
print(paste('Maior natalidade entre',
            sub('X', '', birthsColNames[higherBirthRatePos]),
            ' e ',
            sub('X', '', birthsColNames[higherBirthRatePos+1])))


# C -------------------------------------------------

# find all sums
birthQtts10to14 <- character()

for (i in 1:(nrow(births)-1)){
  birthQtt10to14 <- births$X2010[i] + births$X2011[i]
              + births$X2012[i] + births$X2013[i]
              + births$X2014[i]
  birthQtts10to14 <- c(birthQtts10to14, birthQtt10to14)
}

# find top 3 of them
tops10to14Pos <- character()
tops10to14 <- character()

for (i in 1:3){
  higher10to14Pos <- which.max(birthQtts10to14)
  tops10to14 <- c(tops10to14, birthQtts10to14[higher10to14Pos])
  tops10to14Pos <- c(tops10to14Pos, higher10to14Pos)
  birthQtts10to14[higher10to14Pos] <- -Inf
}

# plot them
plot(c(births$X2010[1],
       births$X2011[1],
       births$X2012[1],
       births$X2013[1],
       births$X2014[1]),
     type='o',
     col='red',
     ylim=c(0, 15000),
     main='Altas taxas de natalidade',
     xlab='Ano entre 2010 e 2014',
     ylab='Quantidade de nascimentos')

lines(c(births$X2010[2],
       births$X2011[2],
       births$X2012[2],
       births$X2013[2],
       births$X2014[2]),
     type='o', col='green')

lines(c(births$X2010[3],
        births$X2011[3],
        births$X2012[3],
        births$X2013[3],
        births$X2014[3]),
      type='o', col='blue')

legend(1, 11000, c('Natal', 'Mossoró', 'Parnamirim'), fill=c('red', 'green', 'blue'))
