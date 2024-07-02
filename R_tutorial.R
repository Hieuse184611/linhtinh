myString = "Hello World "
print(myString)

v <- TRUE 
print(class(v))

v = 2L 
print(class(v))
print(v)


v = charToRaw("Hello BILL")
print(class(v))
print(v)

apple = c('red','green','yellow')
print(class(apple))
print(apple)

#Create list 
list = list(c(2,5,3),21.3,sin)
print(list)
#Create a matrix 
#1st way
c1 = c(1,2,3)
c2 = c(4,5,6)
c3 = c(7,8,9)
mx = cbind(c1,c2,c3)
print(mx)
#2nd way 
M = matrix(c(1,2,3,4,5,6),nrow = 2,ncol = 3,byrow = TRUE)
print(M)


#Array 
a = array(c('green','yellow'),dim=c(3,3,2))
print(a)

#create a vector 
apple_color = c('green','green','yellow','red','red','red','green')
#create a factor object
factor_apple = factor(apple_color)
#print the factor 
print((factor_apple))
print(nlevels(factor_apple))
#FROM GERMINI
# Tạo một vector chứa giới tính của 5 người
gender <- c("Nam", "Nữ", "Nam", "Nữ", "Nữ")
# Tạo một factor từ vector gender
gender_factor <- factor(gender)
# Hiển thị vector gender
print(gender)
# Hiển thị factor gender_factor
print(gender_factor)


#create dataframe 
BMI = data.frame(
 gender=c('Male','Female','Male'),
 height=c(160.7,165.3,157.4),
 weight=c(63,65.6,59),
 age=c(18,19,20)
)
print(BMI) 



