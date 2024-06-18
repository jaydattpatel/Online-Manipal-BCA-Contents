' Exercise 8: Create a program to understand the uses of User-Defined Exceptions in VB.NET Exception Handling.
' Solution:

Module User_Exception  
    Public Class StudentIsZeroException : Inherits Exception  
        Public Sub New(ByVal stdetails As String)  
            MyBase.New(stdetails)  
        End Sub  
    End Class  
    Public Class StudentManagement  
        Dim stud As Integer = 0  
        Sub ShowDetail()  
            If (stud = 0) Then  
                Throw (New StudentIsZeroException(" Student roll no 'zero' does not exist"))  
            Else  
                Console.WriteLine("  Student is {0}", stud)  
            End If  
        End Sub  
    End Class  
    Sub Main()  
        Dim stdmg As StudentManagement = New StudentManagement()  
        Try  
            stdmg.ShowDetail()  
        Catch ex As StudentIsZeroException  
            Console.WriteLine(" StudentIsZeroException {0}", ex.message)  
        End Try  
        Console.ReadKey()  
    End Sub  
End Module

