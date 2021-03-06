/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ModelInfo.cpp
 * Author: cancian
 * 
 * Created on 7 de Novembro de 2018, 18:13
 */

#include "ModelInfo.h"
#include "Model.h"

ModelInfo::ModelInfo() {
	_name = "Model " + std::to_string(Util::GenerateNewIdOfType<Model>()); 
}

ModelInfo::ModelInfo(const ModelInfo& orig) {
}

ModelInfo::~ModelInfo() {
}


void ModelInfo::setName(std::string _name) {
	this->_name = _name;
}

std::string ModelInfo::getName() const {
	return _name;
}

void ModelInfo::setAnalystName(std::string _analystName) {
	this->_analystName = _analystName;
}

std::string ModelInfo::getAnalystName() const {
	return _analystName;
}

void ModelInfo::setDescription(std::string _description) {
	this->_description = _description;
}

std::string ModelInfo::getDescription() const {
	return _description;
}

void ModelInfo::setProjectTitle(std::string _projectTitle) {
	this->_projectTitle = _projectTitle;
}

std::string ModelInfo::getProjectTitle() const {
	return _projectTitle;
}

void ModelInfo::setVersion(std::string _version) {
	this->_version = _version;
}

std::string ModelInfo::getVersion() const {
	return _version;
}

void ModelInfo::setNumberOfReplications(unsigned int _numberOfReplications) {
	this->_numberOfReplications = _numberOfReplications;
}

unsigned int ModelInfo::getNumberOfReplications() const {
	return _numberOfReplications;
}

void ModelInfo::setReplicationLength(double _replicationLength) {
	this->_replicationLength = _replicationLength;
}

double ModelInfo::getReplicationLength() const {
	return _replicationLength;
}

void ModelInfo::setReplicationLengthTimeUnit(Util::TimeUnit _replicationLengthTimeUnit) {
	this->_replicationLengthTimeUnit = _replicationLengthTimeUnit;
}

Util::TimeUnit ModelInfo::getReplicationLengthTimeUnit() const {
	return _replicationLengthTimeUnit;
}

void ModelInfo::setWarmUpPeriod(double _warmUpPeriod) {
	this->_warmUpPeriod = _warmUpPeriod;
}

double ModelInfo::getWarmUpPeriod() const {
	return _warmUpPeriod;
}

void ModelInfo::setWarmUpPeriodTimeUnit(Util::TimeUnit _warmUpPeriodTimeUnit) {
	this->_warmUpPeriodTimeUnit = _warmUpPeriodTimeUnit;
}

Util::TimeUnit ModelInfo::getWarmUpPeriodTimeUnit() const {
	return _warmUpPeriodTimeUnit;
}

void ModelInfo::setTerminatingCondition(std::string _terminatingCondition) {
	this->_terminatingCondition = _terminatingCondition;
}

std::string ModelInfo::getTerminatingCondition() const {
	return _terminatingCondition;
}