student_scores = {
    "John": 93,
    "Tom": 78,
    "Bob": 57
}

student_scores["Marcus"] = 'NA'

for i in student_scores:
    if type(student_scores[i]) == int:
        if student_scores[i] > 75:
            print(i)
