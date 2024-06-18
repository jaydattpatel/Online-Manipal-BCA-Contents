' Exercise 7. Create a program to handle an exception using the Try, Catch, and Finally keywords for Dividing a number by zero in VB.NET programming.
' Solution:

Module TryException  
    Sub divExcept(ByVal a As Integer, ByVal b As Integer)  
        Dim res As Integer  
        Try  
            res = a \ b  
            ' Catch block followed by Try block  
        Catch ex As DivideByZeroException  
            Console.WriteLine(" These exceptions were found in the program {0}", ex)  
            ' Finally block will be executed whether there is an exception or not.  
        Finally  
            Console.WriteLine(" Division result is {0}", res)  
        End Try  
    End Sub  
    Sub Main()  
        divExcept(5, 0) ' pass the parameters value  
        Console.WriteLine(" Press any key to exit...")  
        Console.ReadKey()  
    End Sub  
End Module  

