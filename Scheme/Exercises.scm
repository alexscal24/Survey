;Exercise 2.2.1
;a
(display(+ -8.7 (* 1.2 (- 2 1/3)))) ;Answer: -6.7
(display "\n")

;b
(display(/ (+ 2/3 4/9) (/ 5/11 4/3))) ;Answer: 88/27
(display "\n")

;c
(display(/ (+ 1 1) (/ (+ 2 1) (+ 1 1/2)))) ;Answer: 1
(display "\n")

;d
(display(* 1 -2 3 -4 5 -6 7)) ;Answer: -5040
(display "\n")

;Exercise 2.2.3
;a
(display(cons 'car 'cdr)) ;Answer: (car . cdr)
(display "\n")

;b
(display(list 'this '(is silly))) ;Answer: (this (is silly))
(display "\n")

;c
(display(cons 'is '(this silly?))) ;Answer: (is this silly?)
(display "\n")

;d
(display(quote (+ 2 3))) ;Answer: (+ 2 3)
(display "\n")

;e
(display(cons '+ '(2 3))) ;Answer: (+ 2 3)
(display "\n")

;f
(display(car '(+ 2 3))) ;Answer: +
(display "\n")

;g
(display(cdr '(+ 2 3))) ;Answer: (2 3)
(display "\n")

;h
;(display(cons)) ;Answer: Error
;(display "\n")

;i
(display(quote cons)) ;Answer: cons
(display "\n")

;j
(display(quote (quote cons))) ;Answer: 'cons
(display "\n")

;k
(display(car(quote (quote cons)))) ;Answer: quote
(display "\n")

;l
(display(+ 2 3)) ;Answer: 5
(display "\n")

;m
(display(+ '2 '3)) ;Answer: 5
(display "\n")

;n
(display(+ (car '(2 3)) (car(cdr '(2 3))))) ;Answer: 5
(display "\n")

;o
(display((car (list + - * /)) 2 3)) ;Answer: 5
(display "\n")

;Exercise 2.2.4

(cdr '(a b)) (car(cdr '(c d)))
(exit)