# [Bronze II] Тарифы - 22188 

[문제 링크](https://www.acmicpc.net/problem/22188) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

사칙연산, 구현, 수학

### 제출 일자

2024년 2월 6일 17:34:51

### 문제 설명

<p>В настоящее время практически каждый оператор сотовой связи имеет обширный набор тарифов, которые позволяют каждому человеку выбрать наиболее подходящий для себя. К сожалению, зачастую осуществить этот выбор вручную очень тяжело.</p>

<p>У одного из сотовых операторов каждый тариф характеризуется тремя числами: абонентная плата <i>c<sub>i</sub></i> (задается в рублях), минимальная тарифицируемая единица времени <i>t<sub>i</sub></i> (задается в секундах), стоимость минимальной тарифицируемой единицы времени <i>p<sub>i</sub></i> (задается в копейках, в одном рубле 100 копеек). Суммарная стоимость вызовов за месяц складывается из абонентной платы и стоимостей каждого из исходящих вызовов. Стоимость вызова при использовании <i>i</i>-ого тарифа вычисляется следующим образом: пусть время разговора равно <i>T</i> секунд. Если <i>T</i> < <i>t<sub>i</sub></i>, то стоимость вызова равна нулю. Иначе стоимость вызова равна произведению <i>k</i> на <i>p<sub>i</sub></i>, где <i>k</i> — минимальное целое число, такое что <i>k·t<sub>i</sub></i> ≥ <i>T</i>.</p>

<p>Задано описание тарифов и статистика исходящих вызовов абонента в течение месяца — их число <i>m</i> и длительности <i>d</i><sub>1</sub>, ..., <i>d<sub>m</sub></i> в секундах. Необходимо найти тариф, при котором суммарная стоимость этих вызовов была бы минимальной.</p>

### 입력 

 <p>Первая строка содержит два целых числа <i>n</i> и <i>m</i> — соответственно количество тарифов и исходящих вызовов абонента (1 ≤ <i>n</i>, <i>m</i> ≤ 100). Каждая из последующих <i>n</i> строк описывает один тариф и содержит три целых числа: <i>c<sub>i</sub></i> (0 ≤ <i>c<sub>i</sub></i> ≤ 100), <i>t<sub>i</sub></i> (1 ≤ <i>t<sub>i</sub></i> ≤ 3600), <i>p<sub>i</sub></i> (0 ≤ <i>p<sub>i</sub></i> ≤ 1000).</p>

<p>Последняя строка содержит <i>m</i> целых чисел <i>d</i><sub>1</sub>, ..., <i>d<sub>m</sub></i> (1 ≤ <i>d<sub>i</sub></i> ≤ 3600 для всех <i>i</i> от 1 до <i>m</i>).</p>

### 출력 

 <p>Выведите одно число — номер тарифа, при использовании которого суммарная стоимость исходящих вызовов абонента за рассматриваемый месяц минимальна. Тарифы нумеруются целыми числами от 1 до <i>n</i> в том порядке, в котором они заданы во входном файле. Если таких тарифов несколько, выведите номер любого из них.</p>

