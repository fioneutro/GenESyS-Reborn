/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Traits.h
 * Author: cancian
 *
 * Created on 14 de Agosto de 2018, 19:36
 */

#ifndef TRAITS_H
#define TRAITS_H

// interfaces
#include "Model.h"
#include "Collector_if.h"
#include "Sampler_if.h"
#include "Fitter_if.h"
#include "ModelChecker_if.h"
#include "Parser_if.h"
#include "Statistics_if.h"
#include "Integrator_if.h"
#include "HypothesisTester_if.h"
#include "ModelPersistence_if.h"
#include "GenesysApplication_if.h"
#include "ProcessAnalyser_if.h"
#include "ExperimentDesign_if.h"

// possible implementations
#include "CollectorMyImpl1.h"
#include "CollectorDatafileMyImpl1.h"
#include "CollectorDatafileCancianImpl.h"
#include "SamplerMyImpl1.h"
#include "Sampler_BruFabJoa.h"
#include "FitterMyImpl1.h"
#include "FitterJoaoSouto.h"
#include "ModelCheckerMyImpl1.h"
#include "ParserMyImpl1.h"
#include "IntegratorMyImpl1.h"
#include "IntegratorDiogoImpl.h"
#include "HypothesisTesterMyImpl1.h"
//#include "HypothesisTesterDiogo.h"
#include "ModelPersistenceMyImpl1.h"
#include "StatisticsMyImpl1.h"
#include "StatisticsCancianImpl.h"
#include "BuildSimulationModel.h"
#include "TestInputAnalyserTools.h"
#include "ProcessAnalyserMyImpl1.h"
#include "ExperimentDesignMyImpl1.h"
#include "TestParser.h"
#include "ParserFlexBisonImpl.h"
#include "CollectorDanielBoso.h"
#include "CollectorDatafileDanielBoso.h"
#include "SamplerDanielBoso.h"
#include "StatisticsDanielBoso.h"
#include "StatisticsCollectorDanielBoso.h"
#include "ExperimentDesign_BrunoBonotto_JoaoSouto.h"
#include "FitterFabiola.h"

template <typename T>
struct Traits {
};

template <> struct Traits<GenesysApplication_if> {
	typedef TestInputAnalyserTools Application;  
//	typedef BuildSimulationModel Application;  
	//typedef TestParser Application;  
};

template <> struct Traits<Model> {
	static const bool debugged = true;
	static const Util::TraceLevel traceLevel = Util::TraceLevel::mostDetailed; 
};

template <> struct Traits<ModelComponent> {
	typedef CollectorMyImpl1 CollectorImplementation;
	//typedef CollectorDanielBoso CollectorImplementation;
};

template <> struct Traits<Sampler_if> {
	typedef SamplerMyImpl1 Implementation;
	typedef SamplerMyImpl1::MyRNG_Parameters Parameters;
	//typedef Sampler_BruFabJoa Implementation;
	//typedef Sampler_BruFabJoa::MyRNG_Parameters Parameters;
	//typedef SamplerDanielBoso Implementation;
	//typedef SamplerDanielBoso::MyRNG_Parameters Parameters;
};

template <> struct Traits<Fitter_if> {
	//typedef FitterMyImpl1 Implementation;
//	typedef FitterFabiola Implementation;
        typedef FitterJoaoSouto Implementation;
};

template <> struct Traits<Collector_if> {
	typedef CollectorDatafileMyImpl1 Implementation;
	typedef CollectorMyImpl1 ModelImplementation; //TEMP
	//typedef CollectorDatafileCancianImpl Implementation;
	//typedef CollectorDanielBoso ModelImplementation; //TEMP
	//typedef CollectorDatafileDanielBoso Implementation;
};

template <> struct Traits<ModelChecker_if> {
	typedef ModelCheckerMyImpl1 Implementation;
	//typedef ModelChecker_DS2Karla Implementation;
};

template <> struct Traits<Parser_if> {
	//typedef ParserMyImpl1 Implementation;
	typedef ParserFlexBisonImpl Implementation;
};

template <> struct Traits<Statistics_if> {
	typedef StatisticsMyImpl1 Implementation;
	//typedef StatisticsCancianImpl Implementation;
	//typedef StatisticsDanielBoso Implementation;
};

template <> struct Traits<Integrator_if> {
	typedef IntegratorMyImpl1 Implementation;
	//typedef IntegratorDiogoImpl Implementation;
	unsigned int MaxIterations = 1000;
	double MaxError = 1e-9;
};

template <> struct Traits<HypothesisTester_if> {
	typedef HypothesisTesterMyImpl1 Implementation;
	//typedef HypothesisTesterDiogo Implementation;
};

template <> struct Traits<ModelPersistence_if> {
	typedef ModelPersistenceMyImpl1 Implementation;
};

template <> struct Traits<ExperimentDesign_if> {
	//typedef ExperimentDesignMyImpl1 Implementation;
	typedef ExperimentDesign_BrunoBonotto_JoaoSouto Implementation;
	//typedef ProcessAnalyserMyImpl1 ProcessAnalyserImplementation;
};

template <> struct Traits<ProcessAnalyser_if> {
	typedef ProcessAnalyserMyImpl1 Implementation;
};

#endif /* TRAITS_H */

