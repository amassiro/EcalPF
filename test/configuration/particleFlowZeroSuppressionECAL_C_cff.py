import FWCore.ParameterSet.Config as cms

pfZeroSuppressionThresholds_EB = [0.080]*170
pfZeroSuppressionThresholds_EEminus = [0.300]*39
pfZeroSuppressionThresholds_EEplus = pfZeroSuppressionThresholds_EEminus

#
# These are expected to be adjusted soon, while the thresholds for older setups will remain unchanged.
#

# 
# The three different set of thresholds will be used to study
# possible new thresholds of pfrechits and effects on high level objects
# The values proposed (A, B, C) are driven by expected noise levels
# C ~ 0.5 sigma noise equivalent thresholds


# C
_pfZeroSuppressionThresholds_EB_2018_C = [0.100]*170
_pfZeroSuppressionThresholds_EEminus_2018_C = [0.055, 0.055, 0.06, 0.065, 0.07, 0.075, 0.08, 0.085, 0.085, 0.09, 0.09, 0.095, 0.095, 0.1, 0.11, 0.115, 0.125, 0.135, 0.145, 0.155, 0.17, 0.18, 0.195, 0.21, 0.225, 0.25, 0.285, 0.34, 0.42, 0.535, 0.7, 0.94, 1.275, 1.735, 2.365, 3.21, 4.325, 5.8, 7.7 ]
_pfZeroSuppressionThresholds_EEplus_2018_C = _pfZeroSuppressionThresholds_EEminus_2018_C

_particle_flow_zero_suppression_ECAL_2018_C = cms.PSet(
    thresholds = cms.vdouble(_pfZeroSuppressionThresholds_EB_2018_C + _pfZeroSuppressionThresholds_EEminus_2018_C + _pfZeroSuppressionThresholds_EEplus_2018_C
        )
    )



particle_flow_zero_suppression_ECAL = _particle_flow_zero_suppression_ECAL_2018_C
_particle_flow_zero_suppression_ECAL_2017 = _particle_flow_zero_suppression_ECAL_2018_C

#
# The thresholds have been temporarily removed (lowered to 80 MeV in EB and 300 MeV in EE,
# then overseeded by the gathering and seeding PF cluster thresholds)
# Later, we may need to reintroduce eta dependent thresholds
# to mitigate the effect of the noise
#

from Configuration.Eras.Modifier_run2_ECAL_2017_cff import run2_ECAL_2017
run2_ECAL_2017.toReplaceWith(particle_flow_zero_suppression_ECAL, _particle_flow_zero_suppression_ECAL_2017)

from Configuration.Eras.Modifier_phase2_ecal_cff import phase2_ecal
phase2_ecal.toReplaceWith(particle_flow_zero_suppression_ECAL, _particle_flow_zero_suppression_ECAL_2017)