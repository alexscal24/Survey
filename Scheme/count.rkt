;lang scheme
;; define one or more expressions that can be used to
;; count the number of items on a list without using 
;; the length operator

;; insert work below

(define (count-list list)
    (if (null? list)
    0
    (+ 1 (count-list (cdr list)))
     
))

;; insert work above

(display (count-list '(3 14 15 9 62 64 37)))
(exit)