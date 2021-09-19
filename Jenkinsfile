pipeline {
  agent {
    master true
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
