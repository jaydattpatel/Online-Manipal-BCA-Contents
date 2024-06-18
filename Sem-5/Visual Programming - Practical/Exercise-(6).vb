' Exercise 6: Write a vb.net program to print the reverse triangle pattern.
' Solution:

Public Module Program
	Public Sub Main(args() As string)
	Dim i,j As Integer
	For i=1 To 8
	  For j=1 To 8-i
	    Console.Write("*")
	  next
	  Console.writeline()
	next
	End Sub
End Module

