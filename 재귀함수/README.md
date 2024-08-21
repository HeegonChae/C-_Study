## 1. 재귀 호출
* 1st 'Code # 1' -> **codition = true** -> 2nd 'Code # 1' -> ... -> **codition = false** -> (N)th 'Code #2' -> (N-1)th 'Code #2' -> ... -> 2nd 'Code #2' -> 1st 'Code #2'

```
	void recurs(arguementList){
		// 'Code # 1'

		if (condition)
			recurs(arguementList)

		// 'Code #2'
	}
```

