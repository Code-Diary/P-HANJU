##### [1. 기본 형변환](#기본-형변환)


### 기본 형변환

**object를 string으로 변환**

: str(object)


**object를 int로 변환**

: int(object)


**object를 float으로 변환**

: float(object)


**아스키코드 범위의 숫자를 char로 변환**

: chr(i)


**문자를 int(아스키코드값)으로 변환**

: ord(ch)


- 파이썬에서는 문자를 아스키코드를 나타내는 int형으로 변환하고 연산한 뒤 다시 char형으로 형변환 해주어야 한다.

ex) ch = chr(ord('a')+1);
