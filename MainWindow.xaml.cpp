#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Windows::UI::Xaml;
using namespace std;
using namespace Windows::Foundation::Numerics;



// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::canvas2::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

}


void winrt::canvas2::implementation::MainWindow::plus_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    double a, b, c;
    a = stod(va().Text().c_str());
    b = stod(vb().Text().c_str());
    c = a + b;
    vc().Text(to_wstring(c));
}


void winrt::canvas2::implementation::MainWindow::LeftSlider_ValueChanged(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs const& e)
{
    leftx = e.NewValue() * 4000;
    float3 Vector3(-topy, leftx, 1);

    plus().CenterPoint(Vector3);
    plus().Rotation(0.01);
}


void winrt::canvas2::implementation::MainWindow::TopSlider_ValueChanged(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs const& e)
{
    topy = e.NewValue() * 4000;
    float3 Vector3(-topy, leftx, 1);

    plus().CenterPoint(Vector3);
    plus().Rotation(0.01);
}
