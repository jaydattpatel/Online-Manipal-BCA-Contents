' Exercise 1. Using the concept of classes and objects Calculate the area of a rectangle through .Net programming.
' Solution 

Imports System
Module Module1

    Class Figure
        Public length As Double
        Public breadth As Double
    End Class

    Sub Main()
        Dim Rectangle As Figure = New Figure()
        Dim area As Double = 0.0

        Rectangle.length = 8.0
        Rectangle.breadth = 7.0
        
        area = Rectangle.length * Rectangle.breadth
        Console.WriteLine("Area of Rectangle is : {0}", area)

        Console.ReadKey()
    End Sub
End Module

