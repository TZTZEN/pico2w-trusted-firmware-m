#-------------------------------------------------------------------------------
# SPDX-FileCopyrightText: Copyright The TrustedFirmware-M Contributors
#
# SPDX-License-Identifier: BSD-3-Clause
#
#-------------------------------------------------------------------------------

# Force LOG functionality to be enabled regardless of test configuration AND build type
# This ensures UART output works even when regression tests are disabled
# Use FORCE to override build type settings like MinSizeRel that set LOG_LEVEL_NONE
set(TFM_SPM_LOG_LEVEL           LOG_LEVEL_INFO   CACHE STRING    "Set default SPM log level as INFO level" FORCE)
set(TFM_PARTITION_LOG_LEVEL     LOG_LEVEL_INFO   CACHE STRING    "Set default Secure Partition log level as INFO level" FORCE)

# LOG functionality must remain available regardless of test configuration
# Original test dependency has been removed to fix UART output issues when TEST_S=OFF
set(TFM_SP_LOG_RAW_ENABLED ON CACHE BOOL "SP log functionality always enabled" FORCE)

# SPM log depends on SP log being available
set(TFM_SPM_LOG_RAW_ENABLED ON CACHE BOOL "SPM log functionality always enabled" FORCE)
