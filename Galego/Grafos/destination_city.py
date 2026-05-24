# 1436. Destination City

class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        fui = set()

        for path in paths:
            fui.add(path[0])

        for path in paths:
            if not path[1] in fui:
                return path[1]
