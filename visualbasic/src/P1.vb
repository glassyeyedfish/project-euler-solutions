Imports System

Module P1

    Sub Main(args As String())

        Dim sum As Integer = 0

        For i As Integer = 0 To 999
            If i Mod 3 = 0 Or i Mod 5 = 0 Then
                sum = sum + i
            End If
        Next

        Console.WriteLine(sum)

    End Sub

End Module