' Exercise 11: Write a VB.Net code to check string contains a number or not
' Solution:

Module Module1
    Sub Main()
        Dim num As String = "123"
        Dim ret As Boolean
        ret = IsNumeric(num)
        If (ret = True) Then
            Console.WriteLine("Specified string contains a number")
        Else
            Console.WriteLine("Specified string does not contain a number")
        End If
    End Sub
End Module

