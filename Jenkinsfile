pipeline {
  agent {
    any true
  }
  stages {
     stage('Compile') {
      steps {
        sh '''
          cmake . 
          make
          '''
          }
      }
     stage('Run') {
      steps {
        sh '''
          ./main
          '''
          }
      }
    stage('Check') {
      steps {
        sh '''
        cppcheck --enable=all --inconclusive --xml --xml-version=2 HelloWorld.cpp 2> cppcheck.xml
        '''
          }
      }
  }
}
