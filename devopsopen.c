✅ 1. Start Docker

👉 (Required for Kubernetes also)

sudo systemctl start docker

👉 Check:

sudo systemctl status docker

✔ Should show: active (running)✅ 2. Start Kubernetes
🔹 Start required services
sudo systemctl start containerd
sudo systemctl start kubelet
🔹 Check cluster
kubectl get nodes

👉 Expected:Ready
🔹 If NOT Ready (rare case)

Run:

kubectl get pods -A

👉 Wait 1–2 minutes✅ 3. Start Jenkins (WAR method — your case)

👉 Go to folder where .war file is present:

cd ~/devops

👉 Start Jenkins:

java -jar jenkins.war🌐 Open in browser
http://localhost:8080
⚡ SHORTCUT VERSION (for exam)

👉 Just run these 3 commands:

sudo systemctl start docker
kubectl get nodes
java -jar ~/devops/jenkins.war🎯 Quick Check Table
Tool	Command	Expected
Docker	docker --version	Version
Kubernetes	kubectl get nodes	Ready
Jenkins	Browser	Dashboard
