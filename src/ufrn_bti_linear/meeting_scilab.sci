// >>> 1

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

// viii
LIX = A
LIX(2:3, 2:3) = eye(2,2)

// ix
AA = A
AA(1,:) = AA(3,:) + AA(4,:)

// x
A*inv(A) // não deu identidadade, pois (A*inv(B))(3,1) é igual a 4.441D-16, por quê?
inv(A)*A // resultou em identidade 4x4
inv(A*B)
inv(B)*inv(A)
inv(A)*inv(B)
inv(A*B) == inv(B)*inv(A) // apesar de visualmente iguais, o teste deu F, por quê?

// xi
x = inv(A)*b
A*x-b // por que não deu nulo?

// xii
invAA = inv(AA) // matriz muito próxima, mas não exata
AA*invAA // resultado muito esquisito
invAA*AA // esquisitisse de novo, e diferente do anterior, o que é mais esquisito ainda!

// xiii
x = invAA*b
AA*x-b // o valor de invAA não é exatamente o que deveria ser, por isso deu coisas esquisitas aqui

// xiv
b
b' // o vetor coluna 4x1 virou um vetor linha 1x4
b' * C // um vetor linha
C' * b // deu o mesmo que b'*C, porém em vetor coluna (a transposta do resultado anterior)
b * C' // erro de consistência, a multiplicação não pôde ser feita
C * b' // a transposta de tal inconsistência acima também é inconsistente

// xv
F = B + B'
G = C + C'
F * G
F' * G'
G' * F'
(F*G)' // foi igua à G' * F'
