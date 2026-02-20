pipeline {
    agent any
    environment {
        IMAGE_NAME = 'development/page'
    }
    stages {
        stage('Hello') {
            steps {
                echo "${IMAGE_NAME}"
            }
        }
        stage('Something to say') {
            steps {
                echo 'This is my first stage & stepd'
            }
        }
        stage('GitHub') {
            steps {
                echo 'This stage from GitHub'
            }
        }
    }
}
