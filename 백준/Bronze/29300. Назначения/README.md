# [Bronze II] Назначения - 29300 

[문제 링크](https://www.acmicpc.net/problem/29300) 

### 성능 요약

메모리: 5128 KB, 시간: 68 ms

### 분류

구현, 문자열

### 제출 일자

2025년 11월 28일 11:14:37

### 문제 설명

<p>Как известно, доктор Хаус очень не любит ждать. Особенно он не любит, когда его пациентам необходимо ждать в очереди на операцию. Обычно с этим проблем не возникает, так как руководство больницы всегда готово пойти на встречу лучшему врачу. Но сейчас, когда Форман уехал на конференцию, Хаусу приходится идти на отчаянные меры.</p>

<p>Недавно в больнице установили новую систему регистрации оперируемых больных. Хаусу пришлось нанять хакера, который взломал эту систему. Выяснилось, что в базе каждое назначение на операцию хранится в виде строки, которая может содержать маленькие латинские буквы, цифры и символ подчеркивания. Однако хакер, в силу невысокой квалификации, может изменять назначение в базе, только удаляя из него все вхождения некоторого символа. Кроме того, оказалось, что из каждой строки в базе можно удалить вхождения только одного символа, так как иначе она признается недействительной.</p>

<p>Доктор Хаус выбрал запись, которую он хочет изменить, и теперь ему интересно, какая лексикографически минимальная строка может из нее получиться.</p>

### 입력 

 <p>В первой строке входного файла находится описание назначения на операцию, которое хочет исправить Хаус --- строка  <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D460 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$s$</span></mjx-container> (<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-texatom space="4" texclass="ORD"><mjx-mo class="mjx-n"><mjx-c class="mjx-c7C"></mjx-c></mjx-mo></mjx-texatom><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D460 TEX-I"></mjx-c></mjx-mi><mjx-texatom texclass="ORD"><mjx-mo class="mjx-n"><mjx-c class="mjx-c7C"></mjx-c></mjx-mo></mjx-texatom><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msup space="4"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c36"></mjx-c></mjx-mn></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mrow data-mjx-texclass="ORD"><mo stretchy="false">|</mo></mrow><mi>s</mi><mrow data-mjx-texclass="ORD"><mo stretchy="false">|</mo></mrow><mo>≤</mo><msup><mn>10</mn><mn>6</mn></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1 \le |s| \le 10^6$</span></mjx-container>), состоящая из маленьких латиских букв, цифр и символов подчеркивания.</p>

### 출력 

 <p>В выходной файл выведите лексикографически минимальную строку, которая может получится у доктора Хауса.</p>

