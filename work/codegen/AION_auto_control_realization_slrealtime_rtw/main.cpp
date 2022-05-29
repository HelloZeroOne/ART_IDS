/* Main generated for Simulink Real-Time model AION_auto_control_realization */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "AION_auto_control_realization.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(AION_auto_control_realization_step), slrealtime::TaskInfo::PERIODIC, 0.2, 0, 40);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo AION_auto_control_realization_Info =
{
    "AION_auto_control_realization",
    AION_auto_control_realization_initialize,
    AION_auto_control_realization_terminate,
    []()->char const*& { return AION_auto_control_realization_M->errorStatus; },
    []()->unsigned char& { return AION_auto_control_realization_M->Timing.stopRequestedFlag; },
    { task_1 },
    slrealtime::SegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, AION_auto_control_realization_Info);
}
