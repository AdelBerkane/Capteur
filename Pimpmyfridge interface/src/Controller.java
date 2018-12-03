
public class Controller {
	public float PR;
	public float a = (float)17.27;
	public float b =(float)237.7;
	public float c;
	public float incr = (float) 1.0;
	private Model model;
	private Vue vue;
	
	public float diminueDegres(float temp) {
		Model model = new Model();
		return model.getTemp()-incr;
	}

	public float augmenteDegres(float temp) {
		// TODO Auto-generated method stub
		Model model = new Model();
		return model.getTemp()+incr;
	}
	
	



	}
