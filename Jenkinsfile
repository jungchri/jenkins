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
  }
}
