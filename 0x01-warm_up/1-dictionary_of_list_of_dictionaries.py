#!/usr/bin/python3

from requests import get
import json

if __name__ == "__main__":
    users = get('https://jsonplaceholder.typicode.com/users').json()
    all_dict = {}
    for item in users:
        user_id = item['id']
        user_name = item['username']
        todos = get(
            'https://jsonplaceholder.typicode.com/todos?userId={}'.format(
                user_id)).json()
        all_dos = []
        for select in todos:
            usr_dict = {}
            _title = select['title']
            _completed = select['completed']
            usr_dict = {
                "task": _title,
                "completed": _completed,
                "username": user_name}
            all_dos.append(usr_dict)
        all_dict[user_id] = all_dos
    with open('todo_all_employees.json', "w") as f:
        json.dump(all_dict, f)
