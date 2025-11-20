# [Silver V] Intressid - 7201 

[문제 링크](https://www.acmicpc.net/problem/7201) 

### 성능 요약

메모리: 2040 KB, 시간: 0 ms

### 분류

수학, 구현, 시뮬레이션

### 제출 일자

2025년 11월 20일 19:59:56

### 문제 설명

<p>Vana-aasta õhtul andis Juhan endale lubaduse, et kohe järgmise aasta alguses avab ta kogumishoiuse, kuhu hakkab iga kuu lõpus kandma $D$ eurot. Juhani netopalk ehk reaalselt kätte saadav kuupalk on $P$ eurot. Pank pakub hoiuse eest intresse $N$ protsenti aastas. Nüüd tahab Juhan teada, mitu aastat peab ta raha koguma, et saaks hakata panga poolt makstavatest intressidest elama.</p>

<p>Pank maksab intresse korra aastas aasta viimasel päeval. Kui intressidest äraelamiseks ei piisa, kannab Juhan talle välja makstud intressid hoiusele juba samal päeval. Juhan suudab intressidest ära elada alles siis, kui need ületavad tema aastased kulud. Näiteks, kui Juhan teenib $500$ eurot kuus, millest $200$ eurot paneb ta igas kuus kõrvale, vajab ta äraelamiseks vähemalt $3600$ eurot aastas.</p>

<p>Raha eest, mis oli hoiusel juba aasta alguses, maksab pank intressi $N$ protsenti. Aasta jooksul lisanduvate summade eest maksab pank intressi raha hoiusel hoidmise täiskuude kaupa (detsembris hoiusele lisatud raha eest intressi ei maksta, novembris lisatud raha eest makstakse ühe kuu intressid j.n.e). Ühe kuu jooksul hoiustamise intressim äär $M$ arvutatakse valemiga $((1 + \frac{N}{100})^\frac{1}{12} - 1) \cdot 100\%$. K kuu intressimäär arvutatakse valemiga $((1 + \frac{M}{100})^K - 1) \cdot 100\%$. Aasta intresside kogusumma ümardatakse sendi täpsuseni ning makstakse Juhanile välja.</p>

### 입력 

 <p>Tekstifaili ainsal real on kolm tühikutega eraldatud reaalarvu $P$, $D$ ja $N$ ($P ≤ 10^6$, $0 < D < P$, $0 < N \le 100$). Kõik arvud on antud täpsusega kuni $2$ kohta pärast koma.</p>

### 출력 

 <p>Tekstifaili ainsale reale väljastada üks täisarv: aastate arv, mille jooksul peab Juhan veel t¨o¨ol käima.</p>

