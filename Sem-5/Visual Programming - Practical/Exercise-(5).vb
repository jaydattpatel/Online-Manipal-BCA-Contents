' Exercise 5. Write a Vb.net program to check whether the entered number is palindrome or not.
' Solution:

Module Module1
    Sub Main()
        Dim number As Integer = 0
        Dim remainder As Integer = 0
        Dim reverse As Integer = 0
        Dim temp As Integer = 0
        number = Integer.Parse(Console.ReadLine())
        temp = number
        While (number > 0)
            remainder = number Mod 10
            reverse = reverse * 10 + remainder
            number = number / 10
        End While
        If temp = reverse Then
            Console.WriteLine("Number is palindrome")
        Else
            Console.WriteLine("Number is not palindrome")
        End If
    End Sub   
End Module

