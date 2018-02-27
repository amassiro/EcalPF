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
# A ~ 2.0 sigma noise equivalent thresholds
#

# A
_pfZeroSuppressionThresholds_EB_2018_A = [0.180]*170
_pfZeroSuppressionThresholds_EEminus_2018_A = [0.22, 0.22, 0.24, 0.26, 0.28, 0.3, 0.32, 0.34, 0.34, 0.36, 0.36, 0.38, 0.38, 0.4, 0.44, 0.46, 0.5, 0.54, 0.58, 0.62, 0.68, 0.72, 0.78, 0.84, 0.9, 1.0, 1.14, 1.36, 1.68, 2.14, 2.8, 3.76, 5.1, 6.94, 9.46, 12.84, 17.3, 23.2, 30.8]
_pfZeroSuppressionThresholds_EEplus_2018_A = _pfZeroSuppressionThresholds_EEminus_2018_A

_particle_flow_zero_suppression_ECAL_2018_A = cms.PSet(
    thresholds = cms.vdouble(_pfZeroSuppressionThresholds_EB_2018_A + _pfZeroSuppressionThresholds_EEminus_2018_A + _pfZeroSuppressionThresholds_EEplus_2018_A
        )
    )



particle_flow_zero_suppression_ECAL = _particle_flow_zero_suppression_ECAL_2018_A
_particle_flow_zero_suppression_ECAL_2017 = _particle_flow_zero_suppression_ECAL_2018_A

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