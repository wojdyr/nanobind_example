#include <nanobind/nanobind.h>

namespace nb = nanobind;

using namespace nb::literals;

struct Dog {};

NB_MODULE(nanobind_example_ext, m_unused) {
    (void) m_unused;
    nb::module_ m = nb::module_::import_("nanobind_example");
    m.doc() = "This is a \"hello world\" example with nanobind";
    m.def("add", [](int a, int b) { return a + b; }, "a"_a, "b"_a);
    nb::class_<Dog>(m, "Dog")
      .def(nb::init<>());
}
