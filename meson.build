project('Sender', 'cpp',
        default_options: 'default_library=static')

imgui_dep = dependency('imgui')
sdl2_dep = dependency('sdl2')

executable('Sender', 'backend/main.cpp',
           win_subsystem: 'windows',
           dependencies: [imgui_dep, sdl2_dep])