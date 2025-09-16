/* General Reset */
body {
  font-family: Arial, sans-serif;
  margin: 0;
  padding: 0;
  line-height: 1.6;
  background: #fff;
  color: #333;
}

/* Header */
header {
  background: #ff6f91;
  color: white;
  padding: 20px;
  text-align: center;
}

header h1 {
  margin: 0;
}

nav a {
  margin: 0 15px;
  text-decoration: none;
  color: white;
  font-weight: bold;
}

/* Hero Section */
.hero {
  background: #ffe6eb;
  text-align: center;
  padding: 50px 20px;
}

/* Puppy Sections */
.puppy-section {
  padding: 40px 20px;
  text-align: center;
}

.puppy-section img {
  max-width: 90%;
  height: auto;
  border-radius: 12px;
  margin-top: 15px;
  box-shadow: 0px 4px 6px rgba(0,0,0,0.1);
}

/* Contact Form */
.contact {
  background: #f9f9f9;
  padding: 30px;
  text-align: center;
}

.contact-form {
  max-width: 500px;
  margin: 0 auto;
  display: flex;
  flex-direction: column;
  gap: 15px;
}

.contact-form label {
  text-align: left;
  font-weight: bold;
}

.contact-form input,
.contact-form select,
.contact-form textarea {
  padding: 10px;
  border: 1px solid #ccc;
  border-radius: 8px;
  font-size: 1rem;
}

.contact-form button {
  background: #ff6f91;
  color: white;
  padding: 12px;
  border: none;
  border-radius: 8px;
  cursor: pointer;
  font-size: 1.1rem;
  transition: background 0.3s ease;
}

.contact-form button:hover {
  background: #e85a7d;
}

/* Footer */
footer {
  background: #ff6f91;
  color: white;
  text-align: center;
  padding: 15px;
  margin-top: 20px;
}

/* Gallery Page */
.gallery-section {
  padding: 40px 20px;
  text-align: center;
}

.gallery {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(220px, 1fr));
  gap: 20px;
  margin-top: 20px;
}

.gallery img {
  width: 100%;
  height: auto;
  border-radius: 12px;
  box-shadow: 0px 4px 6px rgba(0,0,0,0.1);
  transition: transform 0.3s ease;
}

.gallery img:hover {
  transform: scale(1.05);
}

/* Thank You Page */
.thankyou {
  text-align: center;
  padding: 60px 20px;
}

.thankyou h2 {
  color: #ff6f91;
  font-size: 2rem;
  margin-bottom: 15px;
}

.back-btn {
  display: inline-block;
  margin-top: 20px;
  padding: 12px 20px;
  background: #ff6f91;
  color: white;
  text-decoration: none;
  border-radius: 8px;
  transition: background 0.3s ease;
}

.back-btn:hover {
  background: #e85a7d;
}

/* Floating Buttons */
.whatsapp-float,
.call-float {
  position: fixed;
  width: 55px;
  height: 55px;
  bottom: 20px;
  right: 20px;
  color: white;
  border-radius: 50%;
  text-align: center;
  font-size: 28px;
  line-height: 55px;
  box-shadow: 0 4px 6px rgba(0,0,0,0.2);
  transition: transform 0.3s ease, background 0.3s ease;
  z-index: 1000;
}

/* WhatsApp Button */
.whatsapp-float {
  background: #25d366;
}

.whatsapp-float:hover {
  background: #1ebc57;
  transform: scale(1.1);
}

/* Call Button */
.call-float {
  bottom: 90px; /* sits above WhatsApp */
  background: #007bff;
}

.call-float:hover {
  background: #0056b3;
  transform: scale(1.1);
}

/* Responsive Design */
@media (max-width: 600px) {
  nav a {
    display: block;
    margin: 10px 0;
  }

  .hero {
    padding: 30px 15px;
  }

  .puppy-section img {
    max-width: 100%;
  }
}
