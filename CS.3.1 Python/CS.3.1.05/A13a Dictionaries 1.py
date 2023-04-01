#A13
student_scores = {
    "John": 93,
    "Tom": 78,
    "Bob": 57
}

student_scores["Marcus"] = 'NA'

print(student_scores)

#Some common dictionary methods:

#dict[“key”]/dict.get[“key”]
student_scores = {
    "John": 93,
    "Tom": 78,
    "Bob": 57
}
print(student_scores["John"])
print(student_scores.get("John"))

#dict[”key”] = new_value
student_scores = {
    "John": 93,
    "Tom": 78,
    "Bob": 57
}
student_scores["John"] = 100
print(student_scores)

#len(dict)
student_scores = {
    "John": 93,
    "Tom": 78,
    "Bob": 57
}
print(len(student_scores))

#dict[“new_key”] = new_value
student_scores = {
    "John": 93,
    "Tom": 78,
    "Bob": 57
}
student_scores["Ryan"] = 100
print(student_scores)

#del = dict[“key”]
student_scores = {
    "John": 93,
    "Tom": 78,
    "Bob": 57
}
del student_scores["John"]
print(student_scores)