import pandas as pd

def findHeavyAnimals(animals: pd.DataFrame) -> pd.DataFrame:
    filteranimals = animals[animals['weight']>100]
    sortedanimals = filteranimals.sort_values(by='weight',ascending=False)
    names = sortedanimals[['name']]
    return names
