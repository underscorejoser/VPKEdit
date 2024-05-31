#include "EmptyPreview.h"

#include <vpkedit/Version.h>

using namespace vpkedit;

EmptyPreview::EmptyPreview(QWidget* parent)
		: InfoPreview({":/logo.png"}, PROJECT_TITLE.data(), parent) {
	// We want the logo to be consistently greyed out
	this->setDisabled(true);
}
