#include "Logger.h"
#include "imgui/imgui.h"

using namespace LoggerSpace;

namespace LoggerSpace {

    class Logger {

        Logger();

        static Logger &GetInstance() {

            if (instance == nullptr) {
                instance = new Logger();
            }

            return &instance;
        }

        void GameStartUp() {}

        void RenderGame() {

            ImGui::DockSpaceOverViewport();
            ImGui::ShowLogWindow();

            ImGui::Begin("Game Log");
        }

        void LogInfo(const std::string info) {
            ImGui::LogText(info);
        }

        void LogGameEvent(const std::string gameEvent) {
            ImGui::LogText(gameEvent);
        }
    }
}