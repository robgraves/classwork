' Matthew Page CSCS1240 Spring 2014 passwordboxxything.vbs
' script to solve the password boxes situation discussed in class, to list 
' possible outcomes if no box can repeat itself and at least one box long, no empty boxes

'Dim x, y, z
'x = Array(a, b, c, d)

'msgbox(x)

'For Each y In x
'    z = msgbox(x)
'Next



'dim myList
'Set myList = New List
'Set myList = CreateObject("System.Collections.ArrayList")
'myList.Add("a")
'myList.Add("b")
'myList.Add("c")
'myList.Add("d")

' Iterate through the List using ArrayIterator. You can of course use other methods...
'Set myListItr = myList.GetIterator
'While myListItr.HasNext
'  MsgBox myListItr.GetNext
'Wend

' Iterate through the List by getting the underlying Array.
'Dim element
'For Each element In myList.GetArray
'  MsgBox element
'Next

Dim myArray(3)

myArray(0) = "a"
myArray(1) = "b"
myArray(2) = "c"
myArray(3) = "d"

Dim i
For Each i In myArray
  MsgBox i
Next

