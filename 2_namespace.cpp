// 2_namespace.cpp
#include <iostream>

// 1. C언어는 이름 충돌을 해결할 수 없기 때문에,
//    전역 함수나 전역 변수의 이름을 약속합니다.
/*
// a.c
void a_n;
void a_foo(void) {}


// b.c
void b_n;
void b_foo(void) {}

*/

// audio.cpp
namespace audio {
void init() { std::cout << "audio init" << std::endl; }

namespace mp3 {
    void play() { }
}
namespace mp4 {
    void play() { }
}

}
// audio_mp3.cpp
namespace audio {
// ...
}

// video.cpp
namespace video {
void init() { std::cout << "video init" << std::endl; }
}

// namespace
// 1) 이름 충돌
// 2) 프로그램의 각 요소를 관련된 요소끼리 그룹화할 수 있습니다.
// 3) 표준 라이브러리는 모든 기능을 std 이름 공간을 통해 제공합니다.

int main()
{
    audio::init();
    video::init();

    audio::mp3::play();
    audio::mp4::play();
}
