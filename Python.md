##### [1. 기본 형변환](#기본-형변환)
##### [2. *args vs **kwargs](#*args-vs-**kwargs)


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

<br>

### *args vs **kwargs

* 먼저 꼭 *args와 **kwargs 라는 이름으로 사용할 필요는 없다.  ( * 만 잘 맞춰서 사용하면 됨)

1. *args는 키워드 되지않은 가변 갯수의 인자들을 함수에 보낼 때 사용합니다. <br>
   여러개가 argument로 들어올 때, 함수 내부에서 해당 변수를 **튜플**로 처리한다.
   
2. **kwargs는 키워드된 가변 갯수의 인자들을 함수에 보낼 때 사용합니다. <br>
   키워드 = ""로 입력할 경우 그것을 각각 키, 값으로 가져오는 **딕셔너리**로 처리한다.
