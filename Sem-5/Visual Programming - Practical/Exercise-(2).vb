' Exercise 2. Write a program to create a Structure in VB.Net.
' Solution:

Module Module1
    Structure Struct
        Public x As Integer
        Public y As Integer
    End Structure
    Sub Main()
        Dim st As New Struct
        st.x = 10
        st.y = 20
        Dim sum As Integer = st.x + st.y
        Console.WriteLine("The result is {0}", sum)
        Console.ReadKey()

    End Sub 
End Module

