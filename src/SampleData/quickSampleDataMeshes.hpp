#pragma once

#include "quickQmlRegister.hpp"

#include <QObject>

namespace quick {

    namespace SampleData {

        class Meshes : public QObject {
            Q_OBJECT
            Q_PROPERTY(QString suzanneOBJ READ getSuzanneOBJ CONSTANT);
            Q_PROPERTY(QString suzanneSTL READ getSuzanneSTL CONSTANT);
            Q_PROPERTY(QString aOBJ READ getAOBJ CONSTANT);
            Q_PROPERTY(QString aSTL READ getASTL CONSTANT);
            Q_PROPERTY(QString bOBJ READ getBOBJ CONSTANT);
            Q_PROPERTY(QString bSTL READ getBSTL CONSTANT);
        private:
            auto makeDataPath(const QString&) -> QString;
        public:
            static Qml::Register::Class<Meshes> Register;
            static Meshes* instance;
            static auto Create() -> void;
            auto getSuzanneOBJ() -> QString;
            auto getSuzanneSTL() -> QString;
            auto getAOBJ() -> QString;
            auto getASTL() -> QString;
            auto getBOBJ() -> QString;
            auto getBSTL() -> QString;
        };
    }
}