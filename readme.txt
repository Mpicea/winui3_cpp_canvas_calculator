## 환경 & 수정한 것
Visual studio 2022에서 winui3 cpp 빈앱패키지됨으로 작성했습니다  
- MainWindow.Xaml
- MainWindow.Xaml.h
- MainWindow.Xaml.cpp  
위의 세 가지만 수정하였습니다.  
또한 환경설정으로서 프로젝트-속성-일반-visual studio 2022으로 맞추어 주었습니다.    
  
## MainWindow.Xaml  
- canvas 레이아웃에는 컨트롤이 x와 y인 좌표값으로 자유롭게 자리할 수 있습니다.  
- 저는 이런 점을 이용하여 canvas에 더하기를 할 수 있는 컨트롤을 만들어 두었습니다.  
- 그리고 여기서 +연산자를 가진 버튼을 슬라이더의 값에 따라 이동하게 할 것입니다.  
- 따라서 canvas에는 계산기를, stackpanel에는 x값과 y값을 조정할 슬라이더를 배치하였습니다.
- controls가 필요하기에 xmlns:controls="using:Microsoft.UI.Xaml.Controls"를 추가해 주었습니다.
  
## MainWindow.Xaml.h
- x좌표와 y좌표에 쓰여야 하는 float 변수 topy와 leftx를 추가해줍니다.
  
## MainWindow.xaml.cpp
- 버튼은 각각의 textbox에서 값을 갖고와서 더하여 결과 textbox에 출력하는 코드를 썼습니다.
- 이때 using namespace std;로 편하게 함수를 쓸 수 있게 하였습니다.
---  
- 슬라이더 부분입니다.
- 슬라이더의 value값을 뽑아서 변수에 저장합니다.
- 이후 float3을 이용하여 x, y, z값을 가지는 vector3를 만들어 줍니다.
- 준비한 vector로 버튼의 중심값에 지정합니다. 중심값, centerpoint는 회전에 영향을 줄 수 있지만 위치에도 영향을 줄 수 있기에 사용하였습니다.
- 그 후 centerpoint의 위치를 적용하기 위해 약간의 회전을 줍니다. ==> rotation
* rotation이 0.01이다 보니 중심값도 그에 맞춰 조금씩만 이동하게 됩니다. 슬라이더 값을 저장할 때 반비례하도록 큰 값을 저장합니다.

## 동영상
https://youtu.be/s5_B4fnTDLw
