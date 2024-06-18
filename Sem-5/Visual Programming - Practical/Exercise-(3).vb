' Exercise 3. Write a program in VB.Net to generate the Fibonacci Series till the total reaches 300.
' Solution: 

Imports System.Collections.Generic
Module Module1
     Sub Main()
        Dim n1 As Integer
        Dim n2 As Integer
        n1 = 1
        n2 = 1
        Console.WriteLine("{0}", n1)
        While n2 < 300
            Console.WriteLine(n2)
            n2 = n2 + n1
            n1 = n2 - n1
        End While
        Console.ReadLine()
     End Sub
End Module

