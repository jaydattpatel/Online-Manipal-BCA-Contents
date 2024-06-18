' Exercise 9: Write a program in vb.net to swap two numbers using the third variable
' Solution:

Imports System
Public Module MyProgram
    Sub Main
        ' Declaration of variables
        Dim a As Integer
        Dim b As Integer
        Dim c As Integer      
        ' Assigning the values of variables
        a = 1
        b = 2
         ' Swapping of numbers
        c = a
        a = b
        b = c
        Console.WriteLine("After Swapping : a = " & a & " b = " & b)
    End Sub
End Module

