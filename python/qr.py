import os
import qrcode

# Generate QR code
img = qrcode.make("https://youtu.be/xvFZjo5PgG0")

# Save as file
img.save("qr.png", "PNG")

# Open file
os.system("open qr.png")
