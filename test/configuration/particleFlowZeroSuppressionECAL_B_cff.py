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
# B ~ 1.0 sigma noise equivalent thresholds
#

# B
_pfZeroSuppressionThresholds_EB_2018_B = [0.140]*170
_pfZeroSuppressionThresholds_EEminus_2018_B = [0.11, 0.11, 0.12, 0.13, 0.14, 0.15, 0.16, 0.17, 0.17, 0.18, 0.18, 0.19, 0.19, 0.20, 0.22, 0.23, 0.25, 0.27, 0.29, 0.31, 0.34, 0.36, 0.39, 0.42, 0.45, 0.50, 0.57, 0.68, 0.84, 1.07, 1.40, 1.88, 2.55, 3.47, 4.73, 6.42, 8.65, 11.6, 15.4]
_pfZeroSuppressionThresholds_EEplus_2018_B = _pfZeroSuppressionThresholds_EEminus_2018_B

_particle_flow_zero_suppression_ECAL_2018_B = cms.PSet(
    thresholds = cms.vdouble(_pfZeroSuppressionThresholds_EB_2018_B + _pfZeroSuppressionThresholds_EEminus_2018_B + _pfZeroSuppressionThresholds_EEplus_2018_B
        )
    )



particle_flow_zero_suppression_ECAL = _particle_flow_zero_suppression_ECAL_2018_B
_particle_flow_zero_suppression_ECAL_2017 = _particle_flow_zero_suppression_ECAL_2018_B

#
# The thresholds have been temporarily removed (lowered to 80 MeV in EB and 300 MeV in EE,
# then overseeded by the gathering and seeding PF cluster thresholds)
# Later, we may need to reintroduce eta dependent thresholds
# to mitigate the effect of the noise
#

#from Configuration.Eras.Modifier_run2_ECAL_2017_cff import run2_ECAL_2017
#run2_ECAL_2017.toReplaceWith(particle_flow_zero_suppression_ECAL, _particle_flow_zero_suppression_ECAL_2017)

#from Configuration.Eras.Modifier_phase2_ecal_cff import phase2_ecal
#phase2_ecal.toReplaceWith(particle_flow_zero_suppression_ECAL, _particle_flow_zero_suppression_ECAL_2017)