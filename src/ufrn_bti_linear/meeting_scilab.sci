// i
A = [1 2 3 4; 4 3 2 1; -1 2 3 4; 0 1 0 1]
b = [1; 0; 1; 1]

// ii
zeros(4, 10)
zeros(10, 10)
eye(10, 10)
rand(4, 10)
Z = zeros(4, 4)
I4 = eye(4, 4)
B = rand(4, 4)*10
C = rand(4, 4)*10

// iii
B*C
C*B
B*C == C*B

// iv
B = rand(4, 4)*10
C = rand(4, 4)*10
B*C == C*B

// v
(B-C)*(B+C) == B*B - C*C

// vi
A23 = A(2, 3)
A1 = A(1, :)
X1 = A(:, 1)
X23 = A(2:3, 2:3)

// vii
LIX = A
LIX(2,3) = 0
LIX(3,2) = 0
