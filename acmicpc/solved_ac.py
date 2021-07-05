from bs4 import BeautifulSoup as bs
import requests
import json
import pprint
import os
import sys

SOLVED = '✅'
UNSOLVED = '💡'


def search_problem(query):
    url = "https://solved.ac/api/v3/search/problem?query="
    # "https://solved.ac/api/v3/search/problem?query=tier:s5..s1+&page=1"
    res = requests.get(url+query)
    problems = json.loads(res.text)

    for problem in problems.get("items"):
        # print(str(problem['problemId']) + '번: ' + problem['titleKo'])
        print(str(problem['problemId']) + ' ', end='')


if __name__ == "__main__":
    search_problem("in_class:2")
